//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SPSchedulerInformation;

@protocol SPSchedulerXPCProtocol <NSObject>
- (oneway void)publishImmediatelyWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)schedulePublishWakeWithInformation:(SPSchedulerInformation *)arg1 completion:(void (^)(NSError *))arg2;
@end

