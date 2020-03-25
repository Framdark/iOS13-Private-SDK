//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSUDispatchLock : NSObject
{
    BOOL _allowRecursiveRead;
    NSObject<OS_dispatch_queue> *_underlyingQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *underlyingQueue; // @synthesize underlyingQueue=_underlyingQueue;
// - (void).cxx_destruct;
- (void)assertHasWriteLock;
- (void)assertHasReadLock;
- (void)performAsynchronousWrite:(id /* CDUnknownBlockType */)arg1;
- (void)performSynchronousWrite:(id /* CDUnknownBlockType */)arg1;
- (void)performAsynchronousRead:(id /* CDUnknownBlockType */)arg1;
- (void)performSynchronousRead:(id /* CDUnknownBlockType */)arg1;
- (BOOL)isInUnderlyingQueue;
- (id)initWithLabel:(id)arg1;
- (id)initWithLabel:(id)arg1 allowRecursiveRead:(BOOL)arg2;
- (id)init;

@end

