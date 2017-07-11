#ifndef _NC_OBJECT_NAME_H_
#define _NC_OBJECT_NAME_H_

#include <glib.h>
#include <glib-object.h>
#include <numcosmo/build_cfg.h> /* current building flags */

G_BEGIN_DECLS

#define NC_TYPE_OBJECT_NAME             (nc_object_name_get_type ())
#define NC_OBJECT_NAME(obj)             (G_TYPE_CHECK_INSTANCE_CAST ((obj), NC_TYPE_OBJECT_NAME, NcObjectName))
#define NC_OBJECT_NAME_CLASS(klass)     (G_TYPE_CHECK_CLASS_CAST ((klass), NC_TYPE_OBJECT_NAME, NcObjectNameClass))
#define NC_IS_OBJECT_NAME(obj)          (G_TYPE_CHECK_INSTANCE_TYPE ((obj), NC_TYPE_OBJECT_NAME))
#define NC_IS_OBJECT_NAME_CLASS(klass)  (G_TYPE_CHECK_CLASS_TYPE ((klass), NC_TYPE_OBJECT_NAME))
#define NC_OBJECT_NAME_GET_CLASS(obj)   (G_TYPE_INSTANCE_GET_CLASS ((obj), NC_TYPE_OBJECT_NAME, NcObjectNameClass))

typedef struct _NcObjectNameClass NcObjectNameClass;
typedef struct _NcObjectName NcObjectName;
typedef struct _NcObjectNamePrivate NcObjectNamePrivate;

struct _NcObjectNameClass
{
  /*< private >*/
  GObjectClass parent_class;
};

struct _NcObjectName
{
  /*< private >*/
  GObject parent_instance;
  NcObjectNamePrivate *priv;
};

GType nc_object_name_get_type (void) G_GNUC_CONST;

/* METHODS */
NcObjectName *nc_object_name_new (gdouble prop1_val);
void nc_object_name_free (NcObjectName *nc_object_name);
void nc_object_name_clear (NcObjectName **nc_object_name);

G_END_DECLS

#endif /* _NC_OBJECT_NAME_H_ */

