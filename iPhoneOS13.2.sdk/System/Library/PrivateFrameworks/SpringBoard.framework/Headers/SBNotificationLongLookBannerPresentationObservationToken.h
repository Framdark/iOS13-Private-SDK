//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBPresentationObservationToken.h>

#import <SpringBoard/SBNotificationBannerDestinationObserver-Protocol.h>

@class NSString, SBNotificationBannerDestination;

@interface SBNotificationLongLookBannerPresentationObservationToken : SBPresentationObservationToken <SBNotificationBannerDestinationObserver>
{
    SBNotificationBannerDestination *_notificationBannerDestination;
}

@property(readonly, nonatomic) SBNotificationBannerDestination *notificationBannerDestination; // @synthesize notificationBannerDestination=_notificationBannerDestination;
- (void)notificationBannerDestinationDidDismissLongLook:(id)arg1;
- (void)notificationBannerDestinationWillDismissLongLook:(id)arg1;
- (void)notificationBannerDestinationDidPresentLongLook:(id)arg1;
- (void)notificationBannerDestinationWillPresentLongLook:(id)arg1;
- (long long)state;
- (void)dealloc;
- (id)initWithNotificationBannerDestination:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
