/* Window.c generated by valac 0.40.25, the Vala compiler
 * generated from Window.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>


#define EDITH_TYPE_WINDOW (edith_window_get_type ())
#define EDITH_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), EDITH_TYPE_WINDOW, EdithWindow))
#define EDITH_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), EDITH_TYPE_WINDOW, EdithWindowClass))
#define EDITH_IS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), EDITH_TYPE_WINDOW))
#define EDITH_IS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), EDITH_TYPE_WINDOW))
#define EDITH_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), EDITH_TYPE_WINDOW, EdithWindowClass))

typedef struct _EdithWindow EdithWindow;
typedef struct _EdithWindowClass EdithWindowClass;
typedef struct _EdithWindowPrivate EdithWindowPrivate;
enum  {
	EDITH_WINDOW_0_PROPERTY,
	EDITH_WINDOW_NUM_PROPERTIES
};
static GParamSpec* edith_window_properties[EDITH_WINDOW_NUM_PROPERTIES];

struct _EdithWindow {
	GtkApplicationWindow parent_instance;
	EdithWindowPrivate * priv;
};

struct _EdithWindowClass {
	GtkApplicationWindowClass parent_class;
};


static gpointer edith_window_parent_class = NULL;

GType edith_window_get_type (void) G_GNUC_CONST;
EdithWindow* edith_window_new (GtkApplication* app);
EdithWindow* edith_window_construct (GType object_type,
                                     GtkApplication* app);
static GObject * edith_window_constructor (GType type,
                                    guint n_construct_properties,
                                    GObjectConstructParam * construct_properties);


EdithWindow*
edith_window_construct (GType object_type,
                        GtkApplication* app)
{
	EdithWindow * self = NULL;
#line 2 "/home/quochuy/Documents/projects/elementary/elementary-app-launcher/Window.vala"
	g_return_val_if_fail (app != NULL, NULL);
#line 3 "/home/quochuy/Documents/projects/elementary/elementary-app-launcher/Window.vala"
	self = (EdithWindow*) g_object_new (object_type, "application", app, NULL);
#line 2 "/home/quochuy/Documents/projects/elementary/elementary-app-launcher/Window.vala"
	return self;
#line 60 "Window.c"
}


EdithWindow*
edith_window_new (GtkApplication* app)
{
#line 2 "/home/quochuy/Documents/projects/elementary/elementary-app-launcher/Window.vala"
	return edith_window_construct (EDITH_TYPE_WINDOW, app);
#line 69 "Window.c"
}


static GObject *
edith_window_constructor (GType type,
                          guint n_construct_properties,
                          GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	EdithWindow * self;
#line 8 "/home/quochuy/Documents/projects/elementary/elementary-app-launcher/Window.vala"
	parent_class = G_OBJECT_CLASS (edith_window_parent_class);
#line 8 "/home/quochuy/Documents/projects/elementary/elementary-app-launcher/Window.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 8 "/home/quochuy/Documents/projects/elementary/elementary-app-launcher/Window.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, EDITH_TYPE_WINDOW, EdithWindow);
#line 9 "/home/quochuy/Documents/projects/elementary/elementary-app-launcher/Window.vala"
	gtk_window_set_title ((GtkWindow*) self, "Edith");
#line 10 "/home/quochuy/Documents/projects/elementary/elementary-app-launcher/Window.vala"
	g_object_set ((GtkWindow*) self, "window-position", GTK_WIN_POS_CENTER, NULL);
#line 11 "/home/quochuy/Documents/projects/elementary/elementary-app-launcher/Window.vala"
	gtk_window_set_default_size ((GtkWindow*) self, 480, 100);
#line 12 "/home/quochuy/Documents/projects/elementary/elementary-app-launcher/Window.vala"
	gtk_window_set_resizable ((GtkWindow*) self, FALSE);
#line 14 "/home/quochuy/Documents/projects/elementary/elementary-app-launcher/Window.vala"
	gtk_widget_show_all ((GtkWidget*) self);
#line 8 "/home/quochuy/Documents/projects/elementary/elementary-app-launcher/Window.vala"
	return obj;
#line 99 "Window.c"
}


static void
edith_window_class_init (EdithWindowClass * klass)
{
#line 1 "/home/quochuy/Documents/projects/elementary/elementary-app-launcher/Window.vala"
	edith_window_parent_class = g_type_class_peek_parent (klass);
#line 1 "/home/quochuy/Documents/projects/elementary/elementary-app-launcher/Window.vala"
	G_OBJECT_CLASS (klass)->constructor = edith_window_constructor;
#line 110 "Window.c"
}


static void
edith_window_instance_init (EdithWindow * self)
{
}


GType
edith_window_get_type (void)
{
	static volatile gsize edith_window_type_id__volatile = 0;
	if (g_once_init_enter (&edith_window_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (EdithWindowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) edith_window_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (EdithWindow), 0, (GInstanceInitFunc) edith_window_instance_init, NULL };
		GType edith_window_type_id;
		edith_window_type_id = g_type_register_static (gtk_application_window_get_type (), "EdithWindow", &g_define_type_info, 0);
		g_once_init_leave (&edith_window_type_id__volatile, edith_window_type_id);
	}
	return edith_window_type_id__volatile;
}



