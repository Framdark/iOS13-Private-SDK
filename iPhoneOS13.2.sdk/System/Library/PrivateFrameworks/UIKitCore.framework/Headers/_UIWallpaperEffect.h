//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIVisualEffect.h"

@class UIColor;

@interface _UIWallpaperEffect : UIVisualEffect
{
    UIColor *_color;
}

+ (id)wallpaperEffectWithStyle:(long long)arg1;
// - (void).cxx_destruct;
- (id)description;
- (long long)_expectedUsage;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)_initWithStyle:(long long)arg1;

@end
