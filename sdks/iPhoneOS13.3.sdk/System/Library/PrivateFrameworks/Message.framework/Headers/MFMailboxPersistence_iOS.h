//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailDaemon/EDMailboxPersistence.h>

@class EDPersistenceDatabase, MFMailMessageLibrary;

@interface MFMailboxPersistence_iOS : EDMailboxPersistence
{
    EDPersistenceDatabase *_database;
    MFMailMessageLibrary *_library;
}

@property(readonly, nonatomic) __weak MFMailMessageLibrary *library; // @synthesize library=_library;
@property(readonly, nonatomic) EDPersistenceDatabase *database; // @synthesize database=_database;
// - (void).cxx_destruct;
- (void)serverCountsForMailboxScope:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (BOOL)renameMailbox:(id)arg1 newName:(id)arg2;
- (BOOL)moveMailbox:(id)arg1 newParentMailboxID:(id)arg2;
- (BOOL)deleteMailbox:(id)arg1;
- (BOOL)createMailbox:(id)arg1 parentMailboxID:(id)arg2;
- (id)mailboxDatabaseIDsForMailboxObjectIDs:(id)arg1 createIfNecessary:(BOOL)arg2;
- (id)initWithMailboxProvider:(id)arg1 database:(id)arg2 library:(id)arg3;

@end

