//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class DNDClientEventBehavior, DNDClientEventDetails, DNDSClientDetails, DNDSRemoteServiceProvider, NSDate;

@protocol DNDSRemoteServiceProviderBehaviorResolutionDelegate 
- (DNDClientEventBehavior *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 resolveBehaviorForEventDetails:(DNDClientEventDetails *)arg2 clientDetails:(DNDSClientDetails *)arg3 date:(NSDate *)arg4 error:(id *)arg5;
@end
