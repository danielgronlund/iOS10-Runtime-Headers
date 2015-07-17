/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICSearchIndexingBatchQueue : NSObject {
    NSMutableOrderedSet * _additionalProcessingIdentifiers;
    NSMutableArray * _batchHistory;
    NSMutableOrderedSet * _currentProcessingIdentifiers;
    ICSearchIndexTransactionInfo * _currentTransactionInfo;
    NSMutableArray * _documentActionsQueue;
    NSMutableOrderedSet * _failedIdentifiers;
    NSCountedSet * _identifierRetryCounts;
    NSOperationQueue * _saveOperationQueue;
    ICSelectorDelayer * _saveSelectorDelayer;
    BOOL  _shouldAddAllObjects;
    NSMutableOrderedSet * _unprocessedIdentifiers;
}

@property (nonatomic, retain) NSMutableOrderedSet *additionalProcessingIdentifiers;
@property (nonatomic, retain) NSMutableArray *batchHistory;
@property (nonatomic, retain) NSMutableOrderedSet *currentProcessingIdentifiers;
@property (nonatomic, copy) ICSearchIndexTransactionInfo *currentTransactionInfo;
@property (nonatomic, retain) NSMutableArray *documentActionsQueue;
@property (nonatomic, retain) NSMutableOrderedSet *failedIdentifiers;
@property (nonatomic, retain) NSCountedSet *identifierRetryCounts;
@property (nonatomic, retain) NSOperationQueue *saveOperationQueue;
@property (nonatomic, retain) ICSelectorDelayer *saveSelectorDelayer;
@property (nonatomic) BOOL shouldAddAllObjects;
@property (nonatomic, retain) NSMutableOrderedSet *unprocessedIdentifiers;

+ (id)loadFromData;
+ (id)userDefaults;

- (void).cxx_destruct;
- (void)addAdditionalProcessingIdentifier:(id)arg1;
- (void)addCurrentProcessingIdentifiers:(id)arg1;
- (void)addDocumentAction:(id)arg1;
- (void)addSearchIndexableIdentifiers:(id)arg1;
- (BOOL)additionalProcessingIdentifierCount;
- (id)additionalProcessingIdentifiers;
- (void)batchDidIndexWithTransactionID:(id)arg1 name:(id)arg2;
- (id)batchForTransactionID:(id)arg1 name:(id)arg2;
- (id)batchHistory;
- (void)beginBatch;
- (BOOL)canRestoreWithIndexPersisttedTransactionInfo:(id)arg1;
- (void)cancelAllOperations;
- (void)commonInit;
- (id)currentProcessingIdentifiers;
- (id)currentTransactionInfo;
- (void)dealloc;
- (void)delete;
- (id)dictionaryRepresentation;
- (id)documentActionsQueue;
- (unsigned int)documentActionsQueueCount;
- (id)earliestTransactionInfo;
- (void)endBatchWithTransactionInfo:(id)arg1;
- (id)failedIdentifiers;
- (id)firstBatchTransactionInfo;
- (BOOL)hasIdentifiersForProcessing;
- (BOOL)hasRemainingIdentifiers;
- (id)identifierRetryCounts;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)nextDocumentAction;
- (id)nextSearchIndexableIdentifier;
- (void)removeAdditionalProcessingIdentifier:(id)arg1;
- (void)reprocessAllAdditionalProcessingIdentifiers;
- (void)reprocessIdentifiersFromBatchWithTransactionID:(id)arg1 name:(id)arg2;
- (BOOL)restoreWithIndexPersistedTransactionInfo:(id)arg1;
- (void)save;
- (void)saveDictionaryRepresentation:(id)arg1 forKey:(id)arg2;
- (id)saveOperationQueue;
- (id)saveSelectorDelayer;
- (void)scheduleSave;
- (void)setAdditionalProcessingIdentifiers:(id)arg1;
- (void)setBatchHistory:(id)arg1;
- (void)setCurrentProcessingIdentifiers:(id)arg1;
- (void)setCurrentTransactionInfo:(id)arg1;
- (void)setDocumentActionsQueue:(id)arg1;
- (void)setFailedIdentifiers:(id)arg1;
- (void)setIdentifierRetryCounts:(id)arg1;
- (void)setSaveOperationQueue:(id)arg1;
- (void)setSaveSelectorDelayer:(id)arg1;
- (void)setShouldAddAllObjects:(BOOL)arg1;
- (void)setUnprocessedIdentifiers:(id)arg1;
- (BOOL)shouldAddAllObjects;
- (unsigned int)unprocessedIdentifierCount;
- (id)unprocessedIdentifiers;
- (void)wrapUpSave;

@end