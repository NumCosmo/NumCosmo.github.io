

/**
 * SECTION:nc_object_name
 * @title: NcObjectName
 * @short_description: Object short description
 * @include: nc_object_name.h
 *
 * Long description
 *
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif /* HAVE_CONFIG_H */
#include "build_cfg.h"

#include "nc_object_name.h"

struct _NcObjectNamePrivate
{
  gdouble private_double;
};

enum
{
  PROP_0,
  PROP_PROP1,
  PROP_SIZE,
};

/* This object is a child of GObject */
G_DEFINE_TYPE (NcObjectName, nc_object_name, G_TYPE_OBJECT);

static void
nc_object_name_init (NcObjectName *nc_object_name)
{
  nc_object_name->priv = G_TYPE_INSTANCE_GET_PRIVATE (nc_object_name, NC_TYPE_OBJECT_NAME, NcObjectNamePrivate);

  nc_object_name->priv->private_double = 0.0;
}

static void
_nc_object_name_set_property (GObject *object, guint prop_id, const GValue *value, GParamSpec *pspec)
{
  NcObjectName *nc_object_name = NC_OBJECT_NAME (object);
  g_return_if_fail (NC_IS_OBJECT_NAME (object));

  switch (prop_id)
  {
    case PROP_PROP1:
      nc_object_name->priv->private_double = g_value_get_double (value);
      break;
    default:
      G_OBJECT_WARN_INVALID_PROPERTY_ID (object, prop_id, pspec);
      break;
  }
}

static void
_nc_object_name_get_property (GObject *object, guint prop_id, GValue *value, GParamSpec *pspec)
{
  NcObjectName *nc_object_name = NC_OBJECT_NAME (object);
  g_return_if_fail (NC_IS_OBJECT_NAME (object));

  switch (prop_id)
  {
    case PROP_PROP1:
      g_value_set_double (value, nc_object_name->priv->private_double);
      break;
    default:
      G_OBJECT_WARN_INVALID_PROPERTY_ID (object, prop_id, pspec);
      break;
  }
}

static void
_nc_object_name_dispose (GObject *object)
{

  /* Chain up : end */
  G_OBJECT_CLASS (nc_object_name_parent_class)->dispose (object);
}

static void
_nc_object_name_finalize (GObject *object)
{

  /* Chain up : end */
  G_OBJECT_CLASS (nc_object_name_parent_class)->finalize (object);
}

static void
nc_object_name_class_init (NcObjectNameClass *klass)
{
  GObjectClass* object_class = G_OBJECT_CLASS (klass);

  g_type_class_add_private (klass, sizeof (NcObjectNamePrivate));

  object_class->set_property = &_nc_object_name_set_property;
  object_class->get_property = &_nc_object_name_get_property;
  object_class->dispose      = &_nc_object_name_dispose;
  object_class->finalize     = &_nc_object_name_finalize;

  g_object_class_install_property (object_class,
                                   PROP_PROP1,
                                   g_param_spec_double ("prop1",
                                                        NULL,
                                                        "This is prop is a double between (0.0, 1.0), default 0.5 ",
                                                        0.0, 1.0, 0.5,
                                                        G_PARAM_READWRITE | G_PARAM_CONSTRUCT | G_PARAM_STATIC_NAME | G_PARAM_STATIC_BLURB));

}


/* METHODS */

/**
 * nc_object_name_new:
 * @prop1: a value for prop1
 *
 * A simple constructor.
 * 
 * Returns: (transfer full): a newly created #NcObjectName
 */
NcObjectName *
nc_object_name_new (gdouble prop1_val)
{
  NcObjectName *nc_object_name = g_object_new (NC_TYPE_OBJECT_NAME, 
                                               "prop1", prop1_val,
                                               NULL);

  return nc_object_name;
}

/**
 * nc_object_name_free:
 * @nc_object_name: a #NcObjectName
 *
 * Decrease reference count by one.
 * 
 */
void 
nc_object_name_free (NcObjectName *nc_object_name)
{
  g_object_unref (nc_object_name);
}

/**
 * nc_object_name_clear:
 * @nc_object_name: a #NcObjectName
 *
 * Decrease reference count by one if *@nc_object_name != NULL
 * and sets @nc_object_name to NULL.
 * 
 */
void 
nc_object_name_clear (NcObjectName **nc_object_name)
{
  g_clear_object (nc_object_name);
}
