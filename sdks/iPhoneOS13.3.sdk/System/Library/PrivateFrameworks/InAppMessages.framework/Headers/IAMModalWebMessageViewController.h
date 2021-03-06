//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class IAMWebView, UIButton;
@protocol IAMViewControllerMetricsDelegate;

@interface IAMModalWebMessageViewController : UIViewController
{
    BOOL _shouldDisplayCloseButton;
    id <IAMViewControllerMetricsDelegate> _metricsDelegate;
    UIButton *_closeButton;
    IAMWebView *_webView;
}

@property(retain, nonatomic) IAMWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) BOOL shouldDisplayCloseButton; // @synthesize shouldDisplayCloseButton=_shouldDisplayCloseButton;
@property(nonatomic) __weak id <IAMViewControllerMetricsDelegate> metricsDelegate; // @synthesize metricsDelegate=_metricsDelegate;
// - (void).cxx_destruct;
- (void)_handleCloseButtonTap:(id)arg1;
- (void)viewDidLoad;
- (id)initWithWebView:(id)arg1;

@end

