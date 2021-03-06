//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@class CNCancelationToken;
@protocol CNScheduler;

@interface _CNGeneratorObservable : CNObservable
{
    id _state;
    id /* CDUnknownBlockType */ _condition;
    id /* CDUnknownBlockType */ _nextState;
    id /* CDUnknownBlockType */ _resultSelector;
    id /* CDUnknownBlockType */ _delay;
    id <CNScheduler> _scheduler;
    CNCancelationToken *_cancelable;
}

// - (void).cxx_destruct;
- (void)updateState;
- (void)sendCurrentStateToObserver:(id)arg1;
- (BOOL)isCanceled;
- (BOOL)isFinished;
- (void)scheduleNextResultForObserver:(id)arg1;
- (void)sendResultsToObserver:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)initWithInitialState:(id)arg1 condition:(id /* CDUnknownBlockType */)arg2 nextState:(id /* CDUnknownBlockType */)arg3 resultSelector:(id /* CDUnknownBlockType */)arg4 delay:(id /* CDUnknownBlockType */)arg5 scheduler:(id)arg6;

@end

