//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EDPersistenceDatabaseConnection;

@interface MFMailMessageLibraryLocalActionsTablesMigrationStep : NSObject
{
    EDPersistenceDatabaseConnection *_connection;
}

+ (id)log;
@property(retain, nonatomic) EDPersistenceDatabaseConnection *connection; // @synthesize connection=_connection;
- (id)_actionFlagsActionIndexDefinition;
- (id)_actionFlagsTableDefinition;
- (id)_actionLabelsLabelIndexDefinition;
- (id)_actionLabelsActionIndexDefinition;
- (id)_actionLabelsTableDefinition;
- (id)_actionMessagesDestinationMessageIndexDefinition;
- (id)_actionMessagesMessageIndexDefinition;
- (id)_actionMessagesActionIndexDefinition;
- (id)_actionMessagesTableDefinition;
- (id)_localMessageActionsMailboxRowIDIndexDefinition;
- (id)_localMessageActionsTableDefinition;
- (id)_serverLabelsTableDefinition;
- (id)_serverMessagesMessageIndexDefinition;
- (id)_serverMessagesTableDefinition;
- (id)_offlineCacheOperations;
- (_Bool)_populateServerMessages;
- (_Bool)performMigrationStep;
- (id)initWithSQLiteConnection:(id)arg1;

@end
