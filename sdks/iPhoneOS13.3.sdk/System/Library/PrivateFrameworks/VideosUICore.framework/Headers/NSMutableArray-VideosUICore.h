//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (VideosUICore)
- (void)_vui_applyUpdateChanges:(id)arg1 destinationObjectsBlock:(id /* CDUnknownBlockType */)arg2 updateObjectBlock:(id /* CDUnknownBlockType */)arg3;
- (void)vui_addObjectsFromArrayIfNotNil:(id)arg1;
- (void)vui_addObjectIfNotNil:(id)arg1;
- (BOOL)vui_applyChangeSet:(id)arg1 destinationObjectsBlock:(id /* CDUnknownBlockType */)arg2 updateObjectBlock:(id /* CDUnknownBlockType */)arg3;
- (BOOL)vui_applyChangeSet:(id)arg1 destinationObjectsBlock:(id /* CDUnknownBlockType */)arg2;
- (BOOL)vui_applyChangeSet:(id)arg1 destinationObjects:(id)arg2 updateObjectBlock:(id /* CDUnknownBlockType */)arg3;
- (BOOL)vui_applyChangeSetIfAvailable:(id)arg1 destinationObjects:(id)arg2 replaceContentsOnNilChanges:(BOOL)arg3;
- (BOOL)vui_applyChangeSet:(id)arg1 destinationObjects:(id)arg2;
@end

