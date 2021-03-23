public class Application : Gtk.Application {
    
    public Application () {
       Object(
           application_id: "com.github.tranqhuy46.edith",
           flags: ApplicationFlags.FLAGS_NONE
       );
    }
    
    
    protected override void activate () {
        var window = new Edith.Window (this);
        add_window (window);
    }

}



