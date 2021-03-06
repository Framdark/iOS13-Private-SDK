//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SUClientInterface, SULinkControl, SUSubtitledButton;
@protocol SUTermsAndConditionsViewDelegate;

@interface SUTermsAndConditionsView : UIView
{
    SUSubtitledButton *_button;
    SUClientInterface *_clientInterface;
    id <SUTermsAndConditionsViewDelegate> _delegate;
    BOOL _hideAccountButton;
    double _rightMargin;
    long long _style;
    SULinkControl *_termsAndConditionsControl;
}

@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) BOOL hideAccountButton; // @synthesize hideAccountButton=_hideAccountButton;
@property(retain, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
- (void)_updateButton;
- (id)_termsAndConditionsControl;
- (long long)_linkStyleForStyle:(long long)arg1;
- (void)_destroyButton;
- (void)_clearButtonSelection:(id)arg1;
- (double)_buttonHeightForStyle:(long long)arg1;
- (id)_button;
- (void)_accountsChangedNotification:(id)arg1;
- (void)_termsAndConditionsAction:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
@property(nonatomic) __weak id <SUTermsAndConditionsViewDelegate> delegate;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

