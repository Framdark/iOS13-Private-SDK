//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/CADObjectInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADObjectOperationGroup : CADOperationGroup <CADObjectInterface>
{
}

+ (BOOL)requiresEventOrReminderAccess;
+ (BOOL)requiresReminderAccess;
+ (BOOL)requiresEventAccess;
- (void)CADObjectIsManaged:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)CADDatabaseDeleteObjectsWithObjectIDs:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)CADDatabaseInsertObjectsWithTempObjectIDs:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)CADObject:(id)arg1 setAttributes:(id)arg2 andRelations:(id)arg3 reply:(id /* CDUnknownBlockType */)arg4;
- (void)CADObject:(id)arg1 getRelatedObjectsWithRelationName:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)CADObject:(id)arg1 getRelatedObjectWithRelationName:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)CADObject:(id)arg1 getDataPropertyWithName:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)CADObject:(id)arg1 getDatePropertyWithName:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)CADObject:(id)arg1 getNumberPropertyWithName:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)CADObject:(id)arg1 getStringPropertyWithName:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)CADObject:(id)arg1 getPropertyWithName:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)CADObject:(id)arg1 getPropertiesWithNames:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)CADObjectsExist:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)CADObjectExists:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;

@end

