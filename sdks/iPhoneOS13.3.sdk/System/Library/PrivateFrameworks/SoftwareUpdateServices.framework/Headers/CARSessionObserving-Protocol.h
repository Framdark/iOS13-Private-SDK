//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CARSession, CARSessionConfiguration;

@protocol CARSessionObserving <NSObject>

@optional
- (void)session:(CARSession *)arg1 didUpdateConfiguration:(CARSessionConfiguration *)arg2;
- (void)sessionDidDisconnect:(CARSession *)arg1;
- (void)sessionDidConnect:(CARSession *)arg1;
- (void)cancelledConnectionAttemptOnTransport:(NSUInteger)arg1;
- (void)startedConnectionAttemptOnTransport:(NSUInteger)arg1;
@end

