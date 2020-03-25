//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/CADCalendarItemInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADCalendarItemOperationGroup : CADOperationGroup <CADCalendarItemInterface>
{
}

+ (BOOL)requiresEventOrReminderAccess;
+ (BOOL)requiresReminderAccess;
+ (BOOL)requiresEventAccess;
- (void)CADDatabaseFetchEntitiesOfType:(int)arg1 withContactIdentifier:(id)arg2 withReply:(id /* CDUnknownBlockType */)arg3;
- (void)CADDatabaseCountEntitiesOfType:(int)arg1 withContactIdentifier:(id)arg2 withReply:(id /* CDUnknownBlockType */)arg3;
- (void)CADDatabaseRemoveContactIdentifier:(id)arg1 forCalendarItem:(id)arg2 withReply:(id /* CDUnknownBlockType */)arg3;
- (void)CADDatabaseAddContactWithIdentifier:(id)arg1 forCalendarItem:(id)arg2 withReply:(id /* CDUnknownBlockType */)arg3;
- (void)CADDatabaseGetContactIdentifierForCalendarItem:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)CADDatabaseExportCalendarItemAsICS:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)CADDatabaseCancelFetchRequestWithIdentifier:(unsigned int)arg1;
- (id)_resultsFilteredForJunkEvents:(id)arg1;
- (id)_resultsFilteredForTCCAccess:(id)arg1;
- (void)CADDatabaseFetchCalendarItemsWithPredicate:(id)arg1 entityType:(int)arg2 fetchIdentifier:(int)arg3 reply:(id /* CDUnknownBlockType */)arg4;
- (void)CADDatabaseGetCalendarItemsWithUniqueIdentifier:(id)arg1 inCalendar:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)CADDatabaseGetCalendarItemWithUUID:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;

@end
