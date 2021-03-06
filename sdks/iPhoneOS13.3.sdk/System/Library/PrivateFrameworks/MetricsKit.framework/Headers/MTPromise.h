//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTPromiseCompletionBlocks, MTPromiseResult, NSConditionLock;

@interface MTPromise : NSObject
{
    MTPromiseCompletionBlocks *_completionBlocks;
    MTPromiseResult *_promiseResult;
    NSConditionLock *_stateLock;
}

+ (id)_globalPromiseStorageAccessQueue;
+ (id)_globalPromiseStorage;
+ (void)_finishPromise:(id)arg1 withPromise:(id)arg2;
+ (BOOL)_errorIsCanceledError:(id)arg1;
+ (void)_configureAnyPromise:(id)arg1 withPromises:(id)arg2 currentPromiseIndex:(NSUInteger)arg3;
+ (void)_configureAllPromise:(id)arg1 withResults:(id)arg2 promises:(id)arg3 currentPromiseIndex:(NSUInteger)arg4;
+ (id)promiseWithAny:(id)arg1;
+ (id)promiseWithAll:(id)arg1;
+ (id)promiseWithResult:(id)arg1;
+ (id)promiseWithError:(id)arg1;
+ (void)cancelPromisesInComposition:(id)arg1;
+ (id)promiseWithComposition:(id)arg1;
+ (void)_setupCompositePromise:(id)arg1 composition:(id)arg2;
+ (id)_findUnfinishedPromise:(id)arg1;
+ (id)_resultOfComposition:(id)arg1 errors:(id)arg2;
@property(retain, nonatomic) NSConditionLock *stateLock; // @synthesize stateLock=_stateLock;
@property(retain, nonatomic) MTPromiseResult *promiseResult; // @synthesize promiseResult=_promiseResult;
@property(retain, nonatomic) MTPromiseCompletionBlocks *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
// - (void).cxx_destruct;
- (BOOL)_isFinished;
- (void)_addBlock:(id /* CDUnknownBlockType */)arg1 orCallWithResult:(id /* CDUnknownBlockType */)arg2;
- (id /* CDUnknownBlockType */)nilValueCompletionHandlerAdapter;
- (id /* CDUnknownBlockType */)errorOnlyCompletionHandlerAdapter;
- (id /* CDUnknownBlockType */)completionHandlerAdapter;
- (id /* CDUnknownBlockType */)boolCompletionHandlerAdapter;
- (BOOL)finishWithResult:(id)arg1 error:(id)arg2;
- (BOOL)finishWithResult:(id)arg1;
- (BOOL)finishWithError:(id)arg1;
- (BOOL)cancel;
- (id)thenWithBlock:(id /* CDUnknownBlockType */)arg1;
- (id)catchWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)waitUntilFinishedWithTimeout:(double)arg1;
- (void)waitUntilFinished;
- (id)resultWithTimeout:(double)arg1 error:(id )arg2;
- (id)resultWithError:(id )arg1;
- (id)resultBeforeDate:(id)arg1 error:(id )arg2;
- (void)addSuccessBlock:(id /* CDUnknownBlockType */)arg1;
- (void)addFinishBlock:(id /* CDUnknownBlockType */)arg1;
- (void)addErrorBlock:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic, getter=isFinished) BOOL finished;
@property(readonly, nonatomic, getter=isCancelled) BOOL cancelled;
- (id)init;

@end

