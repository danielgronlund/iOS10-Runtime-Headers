/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKDeviceSyncRegistry : NSObject {
    NNMKSQLiteConnection * _database;
    NSDate * _dateReceivedCapForAdding;
    double  _deviceScreenScale;
    double  _deviceScreenWidth;
    NSDate * _disconnectedSince;
    unsigned long long  _fullMessagesSyncVersion;
    bool  _isMessagesSyncActive;
    bool  _isMessagesSyncSuspendedByConnectivity;
    bool  _isMessagesSyncSuspendedByUsage;
    bool  _organizeByThread;
    NSString * _path;
    bool  _protectedContentChannelSupported;
    NNMKSyncedMailbox * _syncedMailbox;
}

@property (nonatomic, retain) NNMKSQLiteConnection *database;
@property (nonatomic, retain) NSDate *dateReceivedCapForAdding;
@property (nonatomic) double deviceScreenScale;
@property (nonatomic) double deviceScreenWidth;
@property (nonatomic, retain) NSDate *disconnectedSince;
@property (nonatomic) unsigned long long fullMessagesSyncVersion;
@property (nonatomic) bool isMessagesSyncActive;
@property (nonatomic) bool isMessagesSyncSuspendedByConnectivity;
@property (nonatomic) bool isMessagesSyncSuspendedByUsage;
@property (nonatomic) bool organizeByThread;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic) bool protectedContentChannelSupported;
@property (nonatomic, retain) NNMKSyncedMailbox *syncedMailbox;

- (void).cxx_destruct;
- (void)_deleteAllObjectsFromTable:(id)arg1;
- (void)_insureTransactionFor:(id /* block */)arg1;
- (void)_loadAllControlValues;
- (void)_removeControlValueForKey:(id)arg1;
- (id)_selectSyncedAccountsWhere:(id)arg1 blockForBinding:(id /* block */)arg2;
- (id)_selectSyncedMessagesIdsWhere:(id)arg1 count:(unsigned long long)arg2 blockForBinding:(id /* block */)arg3;
- (id)_selectSyncedMessagesWhere:(id)arg1 blockForBinding:(id /* block */)arg2;
- (void)_setControlValueForKey:(id)arg1 withBlockForBinding:(id /* block */)arg2;
- (id)_ungroupGroupedValue:(id)arg1;
- (void)addObjectIds:(id)arg1 type:(id)arg2 resendInterval:(unsigned long long)arg3 forIDSIdentifierNotYetAckd:(id)arg4;
- (void)addOrUpdateSyncedAccount:(id)arg1;
- (void)addOrUpdateSyncedMessage:(id)arg1;
- (id)allSyncedAccountsKeyedByAccountId;
- (void)beginUpdates;
- (void)cleanUpForNewFullAccountsSync;
- (void)cleanUpForNewFullMessagesSync;
- (bool)containsSyncedMessageForMessageWithId:(id)arg1;
- (id)database;
- (id)dateReceivedCapForAdding;
- (id)datesForIDSIdentifiersScheduledToBeResent;
- (void)deleteObjectId:(id)arg1 fromIDSIdentifiersNotYetAckdOfType:(id)arg2;
- (double)deviceScreenScale;
- (double)deviceScreenWidth;
- (id)disconnectedSince;
- (void)endUpdates;
- (id)firstSyncedMessageIdsContentNotSyncedOrRequestedByUser:(unsigned long long)arg1;
- (unsigned long long)fullMessagesSyncVersion;
- (id)initWithPath:(id)arg1;
- (bool)isMessagesSyncActive;
- (bool)isMessagesSyncSuspendedByConnectivity;
- (bool)isMessagesSyncSuspendedByUsage;
- (void)markIDSIdentifierAsAckd:(id)arg1;
- (id)objectIdsForIDSIdentifierNotYetAckd:(id)arg1 type:(id*)arg2 resendInterval:(unsigned long long*)arg3;
- (id)oldestDateReceived;
- (bool)organizeByThread;
- (id)path;
- (id)pendingComposedMessageIds;
- (void)prepareIDSIdentifiersForResendForErrorCode:(long long)arg1;
- (long long)progressForComposedMessageWithId:(id)arg1;
- (bool)protectedContentChannelSupported;
- (void)removePendingComposedMessages;
- (void)removeProgressForComposedMessageWithId:(id)arg1;
- (void)removeSyncedAccountForAccountWithId:(id)arg1;
- (void)removeSyncedMessageForMessageWithId:(id)arg1;
- (void)removeSyncedMessagesBeforeDateReceived:(id)arg1 adjustDateReceivedCapForAdding:(bool)arg2;
- (void)rescheduleIDSIdentifier:(id)arg1 resendInterval:(unsigned long long)arg2 withDateToResend:(id)arg3 errorCode:(long long)arg4;
- (void)setDatabase:(id)arg1;
- (void)setDateReceivedCapForAdding:(id)arg1;
- (void)setDeviceScreenScale:(double)arg1;
- (void)setDeviceScreenWidth:(double)arg1;
- (void)setDisconnectedSince:(id)arg1;
- (void)setFullMessagesSyncVersion:(unsigned long long)arg1;
- (void)setIsMessagesSyncActive:(bool)arg1;
- (void)setIsMessagesSyncSuspendedByConnectivity:(bool)arg1;
- (void)setIsMessagesSyncSuspendedByUsage:(bool)arg1;
- (void)setOrganizeByThread:(bool)arg1;
- (void)setProgress:(long long)arg1 forComposedMessageWithId:(id)arg2;
- (void)setProtectedContentChannelSupported:(bool)arg1;
- (void)setSyncedMailbox:(id)arg1;
- (id)syncedAccountForAccountWithId:(id)arg1;
- (id)syncedAccountIdsResendRequested;
- (id)syncedMailbox;
- (id)syncedMessageForMessageWithId:(id)arg1;
- (id)syncedMessageIdsContentRequestedByUser;
- (id)syncedMessageIdsResendRequested;
- (unsigned long long)syncedMessagesCount;
- (id)syncedMessagesForConversationWithId:(id)arg1;
- (id)syncedMessagesKeyedByMessageIdAfterDateReceived:(id)arg1;
- (id)typeForIDSIdentifierNotYetAckd:(id)arg1;

@end
