//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDSyncOperationOptions, HMFTimer, NSString, NSUUID;

@interface HMDSyncOperation : HMFObject
{
    NSUUID *_identifier;
    NSUInteger _operationType;
    HMFTimer *_delayTimer;
    id /* CDUnknownBlockType */ _operationBlock;
    HMDSyncOperationOptions *_options;
}

+ (id)cloudZoneFetchSyncOperation:(id)arg1 cloudConflict:(BOOL)arg2 block:(id /* CDUnknownBlockType */)arg3;
+ (id)cloudZonePushSyncOperation:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;
+ (id)cloudFetchSyncOperationWithCloudConflict:(BOOL)arg1 block:(id /* CDUnknownBlockType */)arg2;
+ (id)cloudVerifyAccountSyncOperationWithBlock:(id /* CDUnknownBlockType */)arg1;
+ (id)cloudForcePushSyncOperationWithBlock:(id /* CDUnknownBlockType */)arg1;
+ (id)cloudPushSyncOperationWithBlock:(id /* CDUnknownBlockType */)arg1;
+ (id)cancelOperationWithBlock:(id /* CDUnknownBlockType */)arg1;
+ (id)queryDatabaseOperationWithBlock:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) HMDSyncOperationOptions *options; // @synthesize options=_options;
@property(copy, nonatomic) id /* CDUnknownBlockType */ operationBlock; // @synthesize operationBlock=_operationBlock;
@property(retain, nonatomic) HMFTimer *delayTimer; // @synthesize delayTimer=_delayTimer;
@property(readonly, nonatomic) NSUInteger operationType; // @synthesize operationType=_operationType;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *zoneName;
- (id)description;
- (id)_initWithOperationType:(NSUInteger)arg1 options:(id)arg2 syncBlock:(id /* CDUnknownBlockType */)arg3;

@end

