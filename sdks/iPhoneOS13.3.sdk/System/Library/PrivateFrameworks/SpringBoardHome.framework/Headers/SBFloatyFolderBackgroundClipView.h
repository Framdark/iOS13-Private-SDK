//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SBFolderBackgroundView;

@interface SBFloatyFolderBackgroundClipView : UIView
{
    SBFolderBackgroundView *_backgroundView;
}

@property(readonly, nonatomic) SBFolderBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
// - (void).cxx_destruct;
@property(nonatomic) double cornerRadius;
@property(nonatomic) NSUInteger backgroundEffect;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end
