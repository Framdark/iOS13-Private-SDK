//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface AssistantVoiceDownloadingView : UIView
{
    UIActivityIndicatorView *_indicator;
    UILabel *_downloadLabel;
}

@property(retain, nonatomic) UILabel *downloadLabel; // @synthesize downloadLabel=_downloadLabel;
@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
- (void)layoutSubviews;
- (void)sizeToFit;
- (id)initWithActivityIndicatorStyle:(long long)arg1;

@end
