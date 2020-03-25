//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentControllerObserver-Protocol.h>
#import <Silex/SXComponentExposureMonitor-Protocol.h>
#import <Silex/SXViewportChangeListener-Protocol.h>

@class NSMutableSet, SXViewport;
@protocol SXHost;

@interface SXComponentExposureMonitor : NSObject <SXViewportChangeListener, SXComponentControllerObserver, SXComponentExposureMonitor>
{
    SXViewport *_viewport;
    id <SXHost> _host;
    NSMutableSet *_trackingComponents;
}

@property(retain, nonatomic) NSMutableSet *trackingComponents; // @synthesize trackingComponents=_trackingComponents;
@property(readonly, nonatomic) id <SXHost> host; // @synthesize host=_host;
@property(readonly, nonatomic) SXViewport *viewport; // @synthesize viewport=_viewport;
// - (void).cxx_destruct;
- (void)endExposure:(id)arg1;
- (void)beginExposure:(id)arg1;
- (void)trackExposureForTracking:(id)arg1;
- (void)performMonitoring;
- (void)componentControllerDidPresent:(id)arg1;
- (void)viewport:(id)arg1 documentSizeDidChangeFromSize:(CGSize)arg2;
- (void)viewport:(id)arg1 appearStateChangedFromState:(NSUInteger)arg2;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(CGRect)arg2;
- (void)conditionsChanged;
- (void)stopTrackingExposureOfComponentView:(id)arg1;
- (void)onExposureOf:(id)arg1 then:(id /* CDUnknownBlockType */)arg2 when:(id /* CDUnknownBlockType */)arg3;
- (void)onExposureOf:(id)arg1 then:(id /* CDUnknownBlockType */)arg2;
- (id)initWithViewport:(id)arg1 appStateMonitor:(id)arg2 componentController:(id)arg3 host:(id)arg4;

@end
