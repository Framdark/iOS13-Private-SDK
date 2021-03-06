//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface ICURLRequestRegistry : NSObject
{
    NSMutableArray *_activeRequests;
    NSMutableDictionary *_requestHandlers;
}

+ (id)sharedRegistry;
@property(retain, nonatomic) NSMutableDictionary *requestHandlers; // @synthesize requestHandlers=_requestHandlers;
@property(retain, nonatomic) NSMutableArray *activeRequests; // @synthesize activeRequests=_activeRequests;
// - (void).cxx_destruct;
- (id)popRequestWithUUID:(id)arg1;
- (id)popActiveRequest;
- (id)popRequest:(id)arg1;
- (void)registerOutgoingRequest:(id)arg1;
- (id /* CDUnknownBlockType */)handlerForIncomingRequestWithAction:(id)arg1 scheme:(id)arg2;
- (void)removeHandlerForIncomingRequestsWithAction:(id)arg1 scheme:(id)arg2;
- (void)registerHandler:(id /* CDUnknownBlockType */)arg1 forIncomingRequestsWithAction:(id)arg2 scheme:(id)arg3;

@end

