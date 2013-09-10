/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@class MSAlertManager;

@interface MSAuthenticationManager : NSObject  {
    int _state;
    MSAlertManager *_alertManager;
    int _bagRefetchCount;
    BOOL _isListeningToKeybagChanges;
    int _keybagChangeNotifyToken;
}

@property(getter=isWaitingForAuth,readonly) BOOL waitingForAuth;
@property BOOL isListeningToKeybagChanges;
@property int keybagChangeNotifyToken;

+ (id)sharedManager;

- (void)setKeybagChangeNotifyToken:(int)arg1;
- (int)keybagChangeNotifyToken;
- (void)setIsListeningToKeybagChanges:(BOOL)arg1;
- (BOOL)isListeningToKeybagChanges;
- (void)rearmAuthenticationAlert;
- (void)didEncounterAuthenticationSuccessForPersonID:(id)arg1;
- (void)didEncounterAuthenticationFailureForPersonID:(id)arg1;
- (void)_promptUserForAuthComplianceForAccount:(id)arg1 personID:(id)arg2;
- (void)_didReceiveAccountConfigChangedNotification;
- (id)_accountForPersonID:(id)arg1;
- (id)initWithAlertManager:(id)arg1;
- (BOOL)isWaitingForAuth;
- (void)dealloc;
- (void).cxx_destruct;

@end