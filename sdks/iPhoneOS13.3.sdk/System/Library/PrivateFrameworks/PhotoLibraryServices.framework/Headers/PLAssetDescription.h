//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@interface PLAssetDescription : PLManagedObject
{
}

+ (id)listOfSyncedProperties;
+ (id)entityName;
- (void)willSave;
- (void)prepareForDeletion;
- (BOOL)isSyncableChange;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;

@end

