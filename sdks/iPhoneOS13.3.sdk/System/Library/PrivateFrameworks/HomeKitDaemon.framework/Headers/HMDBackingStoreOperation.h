//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class HMDBackingStore, NSUUID;

@interface HMDBackingStoreOperation : NSOperation
{
    id /* CDUnknownBlockType */ _resultBlock;
    NSUUID *_operationUUID;
    HMDBackingStore *_store;
}

@property(retain, nonatomic) HMDBackingStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) NSUUID *operationUUID; // @synthesize operationUUID=_operationUUID;
@property(copy, nonatomic) id /* CDUnknownBlockType */ resultBlock; // @synthesize resultBlock=_resultBlock;
// - (void).cxx_destruct;
- (id)description;
- (void)main;
- (id)mainReturningError;
- (id)init;
- (id)initWithResultBlock:(id /* CDUnknownBlockType */)arg1;

@end

