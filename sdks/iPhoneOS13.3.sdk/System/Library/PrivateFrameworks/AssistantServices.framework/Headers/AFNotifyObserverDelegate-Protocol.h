//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AFNotifyObserver;

@protocol AFNotifyObserverDelegate <NSObject>

@optional
- (void)notifyObserver:(AFNotifyObserver *)arg1 didChangeStateFrom:(NSUInteger)arg2 to:(NSUInteger)arg3;
- (void)notifyObserver:(AFNotifyObserver *)arg1 didReceiveNotificationWithToken:(int)arg2;
@end

