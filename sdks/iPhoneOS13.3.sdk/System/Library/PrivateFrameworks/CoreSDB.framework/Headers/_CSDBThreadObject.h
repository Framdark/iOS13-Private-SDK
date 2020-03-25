//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRunLoop, NSString, NSThread;
@protocol OS_dispatch_queue;

@interface _CSDBThreadObject : NSObject
{
    NSThread *_thread;
    NSString *_identifier;
    NSRunLoop *_runLoop;
    struct __CFRunLoopSource _runLoopSource;
    NSString *_queueContext;
    NSObject<OS_dispatch_queue> *_queue;
}

- (BOOL)isCurrentThreadOtherwiseAssert:(BOOL)arg1;
- (void)performBlock:(id /* CDUnknownBlockType */)arg1 waitUntilDone:(BOOL)arg2;
- (void)performBlock:(id /* CDUnknownBlockType */)arg1 afterDelay:(double)arg2;
- (void)performBlock:(id /* CDUnknownBlockType */)arg1;
- (id)thread;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 qosClass:(unsigned short)arg2;
- (void)_threadedMain;

@end
