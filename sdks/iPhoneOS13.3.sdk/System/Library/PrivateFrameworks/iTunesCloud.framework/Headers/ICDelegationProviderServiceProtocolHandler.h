//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICRequestContext, ICUserIdentityStore, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface ICDelegationProviderServiceProtocolHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_calloutQueue;
    ICUserIdentityStore *_identityStore;
    NSOperationQueue *_operationQueue;
    NSUInteger _nextSessionUniqueID;
    ICRequestContext *_requestContext;
}

// - (void).cxx_destruct;
- (NSUInteger)_nextSessionUniqueID;
- (void)_getPlayInfoRequestWithStartDelegationResponse:(id)arg1 streamContexts:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)getStartDelegationRequestForAccountIDs:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)getFinishDelegationRequestsWithStartDelegationResponse:(id)arg1 streamContexts:(id)arg2 replyHandler:(id /* CDUnknownBlockType */)arg3;
- (id)initWithUserIdentityStore:(id)arg1 requestContext:(id)arg2;

@end

