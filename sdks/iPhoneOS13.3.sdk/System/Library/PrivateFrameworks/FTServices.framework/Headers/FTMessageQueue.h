//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUTDeferredTaskQueue, IDSBaseMessage, NSArray, NSMutableArray;
@protocol FTMessageQueueDelegate;

@interface FTMessageQueue : NSObject
{
    NSMutableArray *_queue;
    NSMutableArray *_addDates;
    id <FTMessageQueueDelegate> _delegate;
    CUTDeferredTaskQueue *_timeoutTask;
}

@property __weak id <FTMessageQueueDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSMutableArray *_addDates; // @synthesize _addDates;
@property(retain) NSMutableArray *_queue; // @synthesize _queue;
// - (void).cxx_destruct;
- (BOOL)removeMessage:(id)arg1;
- (BOOL)addMessageAtHeadOfQueue:(id)arg1;
- (BOOL)addMessage:(id)arg1;
- (id)dequeueTopMessage;
- (void)removeAllMessages;
- (void)_timeoutHit;
- (void)_setTimeout;
- (void)_clearTimeout;
@property(readonly) long long count;
@property(readonly) NSArray *messages;
@property(readonly) IDSBaseMessage *topMessage;
- (id)init;

@end

