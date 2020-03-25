//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSSet, NSString, SBIcon, SBIconView;

@protocol SBIconViewQuerying
- (void)enumerateDisplayedIconViewsUsingBlock:(void (^)(SBIconView *, BOOL ))arg1;
- (void)enumerateDisplayedIconViewsForIcon:(SBIcon *)arg1 usingBlock:(void (^)(SBIconView *))arg2;
- (BOOL)isDisplayingIconView:(SBIconView *)arg1 inLocation:(NSString *)arg2;
- (BOOL)isDisplayingIconView:(SBIconView *)arg1;
- (BOOL)isDisplayingIcon:(SBIcon *)arg1;
- (BOOL)isDisplayingIcon:(SBIcon *)arg1 inLocations:(NSArray *)arg2;
- (BOOL)isDisplayingIcon:(SBIcon *)arg1 inLocation:(NSString *)arg2;
- (SBIconView *)firstIconViewForIcon:(SBIcon *)arg1 excludingLocations:(NSSet *)arg2;
- (SBIconView *)firstIconViewForIcon:(SBIcon *)arg1;
- (SBIconView *)firstIconViewForIcon:(SBIcon *)arg1 inLocations:(NSArray *)arg2;
- (SBIconView *)iconViewForIcon:(SBIcon *)arg1 location:(NSString *)arg2;
@end

