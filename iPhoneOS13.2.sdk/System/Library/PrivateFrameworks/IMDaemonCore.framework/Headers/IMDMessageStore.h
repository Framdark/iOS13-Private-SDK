//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSTimer;

@interface IMDMessageStore : NSObject
{
    NSString *_modificationStamp;
    NSNumber *_cachedUnreadMessageCount;
    NSNumber *_cachedLastFailedMessageDate;
    _Bool _suppressedUpdates;
    _Bool _pendingDBUpdatePost;
    NSTimer *_suppressedUpdatesTimer;
}

+ (void)_displayDatabaseFullAlert;
+ (void)databaseNoLongerFull;
+ (void)databaseFull;
+ (void)_updateCacheForMessageGUID:(id)arg1 fromMessage:(id)arg2 toMessage:(id)arg3 updateLastMessage:(_Bool)arg4 calculateUnreadCount:(_Bool)arg5;
+ (id)sharedInstance;
@property(retain) NSString *modificationStamp; // @synthesize modificationStamp=_modificationStamp;
- (long long)lastSyncedMessageRowID;
- (void)markMessageAsIgnoreButNeedingSyncWithROWID:(long long)arg1;
- (void)markMessageAsCleanWithROWID:(long long)arg1;
- (void)clearMessagesTombStoneTable;
- (void)deleteMessagesFromTombStoneTableWithRecordIDs:(id)arg1;
- (id)copyMessagesThatNeedToBeDeletedInCloudKitWithLimit:(unsigned long long)arg1;
- (void)markAllMessagesAsNeedingCloudKitSync;
- (id)messagesThatNeedSyncWithCloudKitWithLimit:(long long)arg1;
- (id)_messagesThatNeedSyncWithCloudKitWithLimit:(long long)arg1 attemptCount:(unsigned long long)arg2;
- (_Bool)_isUsingStingRay;
- (_Bool)_itemClassShouldUpdateTransferForItem:(id)arg1;
- (void)loadConsumedSessionPayloadsForItems:(id)arg1;
- (id)replaceMessageAcknowledgmentsWithNewMessageAcknowledgment:(id)arg1 associatedMessageGUID:(id)arg2 sender:(id)arg3;
- (void)postCountChanges;
- (void)rebuildUnreadMessageCount;
- (void)rebuildLastFailedMessageDate;
- (_Bool)_shouldUseBadgeUtilities;
- (void)databaseChatSpamUpdated:(id)arg1;
- (void)updateStamp;
- (void)_postDBUpdate;
- (void)__postDBUpdate;
- (void)retractPostedNotificationsForMessageGUIDs:(id)arg1;
- (void)setSuppressDatabaseUpdates:(_Bool)arg1;
- (void)_suppressDBUpdateTimerFired;
- (_Bool)isSuppressDatabaseUpdates;
- (void)cleanseAttachments;
- (long long)unreadMessagesCount;
- (long long)lastFailedMessageDate;
- (id)markMessagesAsReadWithRoomname:(id)arg1 onService:(id)arg2 upToGUID:(id)arg3 readDate:(id)arg4 fromMe:(_Bool)arg5;
- (id)markMessagesAsReadWithHandle:(id)arg1 onService:(id)arg2 upToGUID:(id)arg3 readDate:(id)arg4 fromMe:(_Bool)arg5;
- (id)markMessagesAsReadWithRoomNames:(id)arg1 onServices:(id)arg2 upToGUID:(id)arg3 readDate:(id)arg4 fromMe:(_Bool)arg5;
- (id)markMessagesAsReadWithHandles:(id)arg1 onServices:(id)arg2 upToGUID:(id)arg3 readDate:(id)arg4 fromMe:(_Bool)arg5;
- (id)deleteMessagesWithReplaceMessageID:(int)arg1 fromHandle:(id)arg2 onService:(id)arg3;
- (id)deleteMessagesWithChatIdentifiers:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3;
- (id)deleteMessagesWithChatIdentifiers:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 completion:(id /* block */)arg4;
- (void)_deleteMessagesWithGUIDs:(id)arg1 chatIdentifiers:(id)arg2 style:(unsigned char)arg3 onServices:(id)arg4 batchNumber:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (id)deleteMessageGUIDs:(id)arg1;
- (id)deleteMessageGUIDs:(id)arg1 inChat:(id)arg2;
- (void)resolveUnformattedRepresentationsForHandles:(id)arg1 onService:(id)arg2 message:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)_cleanUnformattedPhoneNumber:(id)arg1 countryCode:(id)arg2;
- (_Bool)_isValidPhoneNumber:(id)arg1 forCountryCode:(id)arg2;
- (struct _IMDHandleRecordStruct *)_copyHandle:(id)arg1 onService:(id)arg2;
- (id)_chatsForMessageIdentifier:(long long)arg1;
- (id)chatForMessageIdentifier:(long long)arg1;
- (id)_chatsForMessageGUID:(id)arg1 enableVerboseLogging:(_Bool)arg2;
- (id)chatsForMessageGUID:(id)arg1;
- (id)chatsForMessage:(id)arg1;
- (id)chatForMessageGUID:(id)arg1 enableVerboseLogging:(_Bool)arg2;
- (id)chatForMessageGUID:(id)arg1;
- (id)chatForMessage:(id)arg1;
- (id)messagesWithReplyToGUID:(id)arg1;
- (id)frequentRepliesForForChatIdentifiers:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3;
- (id)messageActionItemsForOriginalMessageGUID:(id)arg1;
- (id)attachmentsWithRoomNames:(id)arg1 onServices:(id)arg2;
- (id)attachmentsWithHandles:(id)arg1 onServices:(id)arg2;
- (id)lastMessageWithRoomNames:(id)arg1 onServices:(id)arg2;
- (id)unreadMessagesWithRoomNames:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 fallbackGUID:(id)arg4;
- (id)unreadMessagesWithHandles:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 fallbackGUID:(id)arg4;
- (id)lastMessageWithHandles:(id)arg1 onServices:(id)arg2;
- (id)messagesWithHandlesBeforeAndAfterGUID:(id)arg1 handles:(id)arg2 onServices:(id)arg3 numberOfMessagesBefore:(unsigned long long)arg4 numberOfMessagesAfter:(unsigned long long)arg5;
- (id)messagesWithRoomNames:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 limit:(unsigned long long)arg4;
- (id)messagesWithRoomNames:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3;
- (id)messagesWithHandles:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 limit:(unsigned long long)arg4;
- (id)messagesWithHandles:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3;
- (id)messageWithReplaceMessageID:(int)arg1 fromHandle:(id)arg2 onService:(id)arg3;
- (void)markMessageAsDeduplicated:(id)arg1;
- (id)existingMessageSimilarToMessage:(id)arg1 skipServices:(id)arg2 skipGUIDs:(id)arg3 withinTimeInterval:(double)arg4 participants:(id)arg5;
- (id)messageWithGUID:(id)arg1 registerAttachments:(_Bool)arg2;
- (id)messageWithGUID:(id)arg1;
- (id)itemWithGUID:(id)arg1;
- (_Bool)hasStoredMessageWithGUID:(id)arg1;
- (_Bool)canStoreMessage:(id)arg1 onService:(id)arg2;
- (_Bool)canStoreItem:(id)arg1 onService:(id)arg2;
- (id)messagesWithGUIDs:(id)arg1;
- (id)messagesWithAssociatedGUID:(id)arg1 shouldLoadAttachments:(_Bool)arg2;
- (id)messagesWithAssociatedGUID:(id)arg1;
- (id)_fileTransferCenter;
- (void)registerTransfersWithGUIDs:(id)arg1 forMessageGUID:(id)arg2;
- (id)_unreadMessagesWithRoomNames:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 fallbackGUID:(id)arg4;
- (id)_unreadMessagesWithHandles:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 fallbackGUID:(id)arg4;
- (id)_messagesWithHandlesBeforeAndAfterGUID:(id)arg1 handles:(id)arg2 onServices:(id)arg3 numberOfMessagesBefore:(unsigned long long)arg4 numberOfMessagesAfter:(unsigned long long)arg5;
- (id)_messagesWithRoomNames:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 limit:(unsigned long long)arg4 onlyMessages:(_Bool)arg5;
- (id)_messagesWithHandles:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 limit:(unsigned long long)arg4 onlyMessages:(_Bool)arg5;
- (id)_itemsWithGUIDs:(id)arg1;
- (id)_itemsWithAssociatedGUID:(id)arg1 shouldLoadAttachments:(_Bool)arg2;
- (_Bool)_hasMessagesWithGUIDs:(id)arg1;
- (void)updateUnformattedID:(id)arg1 forBuddyID:(id)arg2 onService:(id)arg3;
- (id)storeMessage:(id)arg1 forceReplace:(_Bool)arg2 modifyError:(_Bool)arg3 modifyFlags:(_Bool)arg4 flagMask:(unsigned long long)arg5 updateMessageCache:(_Bool)arg6 calculateUnreadCount:(_Bool)arg7 reindexMessage:(_Bool)arg8;
- (id)storeMessage:(id)arg1 forceReplace:(_Bool)arg2 modifyError:(_Bool)arg3 modifyFlags:(_Bool)arg4 flagMask:(unsigned long long)arg5 updateMessageCache:(_Bool)arg6 calculateUnreadCount:(_Bool)arg7;
- (id)storeMessage:(id)arg1 forceReplace:(_Bool)arg2 modifyError:(_Bool)arg3 modifyFlags:(_Bool)arg4 flagMask:(unsigned long long)arg5;
- (id)storeItem:(id)arg1 forceReplace:(_Bool)arg2;
- (void)updateFileTransfer:(id)arg1;
- (void)_storeAttachmentsForMessage:(id)arg1;
- (void)_performBlock:(id /* block */)arg1 afterDelay:(double)arg2;
- (void)_updateModificationDate;
- (id)_chatRegistrySharedInstance;
- (void)dealloc;
- (void)performInitialHousekeeping;
- (id)init;

@end
