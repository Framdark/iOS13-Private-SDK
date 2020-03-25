//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSData, UIImageView, WFWorkflowIcon;

@interface WFWorkflowWizardNameIconButton : UIButton
{
    WFWorkflowIcon *_icon;
    NSData *_customImageData;
    UIImageView *_backgroundImageView;
}

@property(nonatomic) __weak UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(readonly, nonatomic) NSData *customImageData; // @synthesize customImageData=_customImageData;
@property(readonly, nonatomic) WFWorkflowIcon *icon; // @synthesize icon=_icon;
// - (void).cxx_destruct;
- (CGSize)intrinsicContentSize;
- (void)setIcon:(id)arg1 customImageData:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end
