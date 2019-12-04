//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString, UIImage, VUIScorecardView;

@protocol VUIScorecardViewDelegate 
- (double)maximumWidthForScorecardView:(VUIScorecardView *)arg1;
- (NSString *)scoreValue:(VUIScorecardView *)arg1 inRow:(long long)arg2 atIndex:(long long)arg3;
- (long long)numberOfScoreValuesForScorecardView:(VUIScorecardView *)arg1 inRow:(long long)arg2;
- (long long)numberOfRowsInScorecardView:(VUIScorecardView *)arg1;
- (long long)styleForScorecardView:(VUIScorecardView *)arg1;

@optional
- (int)backgroundBlendModeForScoreValueInRow:(long long)arg1 atIndex:(long long)arg2;
- (UIImage *)backgroundImageForScorecardViewMaterial:(VUIScorecardView *)arg1;
@end
