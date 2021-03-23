public class Edith.Window : Gtk.ApplicationWindow {
    public Window (Gtk.Application app) {
        	Object(
        	    application: app
        	);
    }
    
    construct {
        title  = "Edith";
        window_position = Gtk.WindowPosition.CENTER;
        set_default_size (480, 100);
        resizable = false;
        
        show_all();
    }
}
