/* BeepController */


@interface BeepController : NSObject {
	//add notification sheet fields
	IBOutlet NSPanel		*_newNotificationPanel;				// The Add Panel
    IBOutlet NSButton		*_newNotificationDefault;			// Whether this note is on by default
	IBOutlet NSButton		*_newNotificationSticky;			// Whether this note is sticky
    IBOutlet NSTextField	*_newNotificationDescription;		// The long description
    IBOutlet NSImageView	*_newNotificationImage;				// The associated image
    IBOutlet NSTextField	*_newNotificationTitle;				// The name of this note
	
	//main window
	IBOutlet NSWindow		*_beepWindow;						// The main window
    IBOutlet NSTableView	*_notificationsTable;				// The table of notifications
    IBOutlet NSButton		*_registered;						// The magic button that registers/unregisters
	IBOutlet NSButton		*_addNotification;					// The button button that opens the add note pane
    IBOutlet NSButton		*_removeNotification;				// The remove button (TBR)
	IBOutlet NSButton		*_sendButton;						// The button to send a notification
	
	//data
	NSMutableArray			*_notifications;					// The Array of notifications
}

- (IBAction)showAddSheet:(id)sender;
- (IBAction)addNotification:(id)sender;
- (IBAction)removeNotification:(id)sender;
- (IBAction)registerBeep:(id)sender;
- (IBAction)sendNotification:(id)sender;
- (IBAction) endPanel:(id)sender;
@end

