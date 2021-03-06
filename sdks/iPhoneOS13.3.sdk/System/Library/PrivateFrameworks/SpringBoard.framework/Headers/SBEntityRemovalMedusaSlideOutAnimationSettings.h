//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class SBEntityRemovalMedusaDefaultAnimationSettings, SBFFluidBehaviorSettings;

@interface SBEntityRemovalMedusaSlideOutAnimationSettings : PTSettings
{
    double _toBeMadeFullScreenPushInScale;
    double _toBeMadeFullScreenScaleResetAnimationDelay;
    double _toBeRemovedSlideOutAnimationDelay;
    double _toBeRemovedSlideOutHeightOffsetMultiplier;
    SBFFluidBehaviorSettings *_toBeMadeFullscreenPushInScaleAnimationSettings;
    SBFFluidBehaviorSettings *_toBeMadeFullscreenScaleResetAnimationSettings;
    SBFFluidBehaviorSettings *_toBeRemovedSlideOutAnimationSettings;
    SBEntityRemovalMedusaDefaultAnimationSettings *_defaultAnimationSettings;
}

+ (id)settingsControllerModule;
@property(retain, nonatomic) SBEntityRemovalMedusaDefaultAnimationSettings *defaultAnimationSettings; // @synthesize defaultAnimationSettings=_defaultAnimationSettings;
@property(retain, nonatomic) SBFFluidBehaviorSettings *toBeRemovedSlideOutAnimationSettings; // @synthesize toBeRemovedSlideOutAnimationSettings=_toBeRemovedSlideOutAnimationSettings;
@property(retain, nonatomic) SBFFluidBehaviorSettings *toBeMadeFullscreenScaleResetAnimationSettings; // @synthesize toBeMadeFullscreenScaleResetAnimationSettings=_toBeMadeFullscreenScaleResetAnimationSettings;
@property(retain, nonatomic) SBFFluidBehaviorSettings *toBeMadeFullscreenPushInScaleAnimationSettings; // @synthesize toBeMadeFullscreenPushInScaleAnimationSettings=_toBeMadeFullscreenPushInScaleAnimationSettings;
@property(nonatomic) double toBeRemovedSlideOutHeightOffsetMultiplier; // @synthesize toBeRemovedSlideOutHeightOffsetMultiplier=_toBeRemovedSlideOutHeightOffsetMultiplier;
@property(nonatomic) double toBeRemovedSlideOutAnimationDelay; // @synthesize toBeRemovedSlideOutAnimationDelay=_toBeRemovedSlideOutAnimationDelay;
@property(nonatomic) double toBeMadeFullScreenScaleResetAnimationDelay; // @synthesize toBeMadeFullScreenScaleResetAnimationDelay=_toBeMadeFullScreenScaleResetAnimationDelay;
@property(nonatomic) double toBeMadeFullScreenPushInScale; // @synthesize toBeMadeFullScreenPushInScale=_toBeMadeFullScreenPushInScale;
// - (void).cxx_destruct;
- (void)setDefaultValues;

@end

