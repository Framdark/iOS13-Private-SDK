//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>


@class NSURL, PKPaymentProvisioningController, UIWebView;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentCardIneligibleViewController : UIViewController <UIWebViewDelegate>
{
    UIWebView *_webView;
    id /* CDUnknownBlockType */ _preflightCompletion;
    BOOL _preloadLearnMoreWebView;
    long long _reason;
    long long _context;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
    PKPaymentProvisioningController *_provisioningController;
    NSURL *_learnMoreURL;
    id /* CDUnknownBlockType */ _learnMorePresentationHandler;
    id /* CDUnknownBlockType */ _continueActionHandler;
}

@property BOOL preloadLearnMoreWebView; // @synthesize preloadLearnMoreWebView=_preloadLearnMoreWebView;
@property(copy, nonatomic) id /* CDUnknownBlockType */ continueActionHandler; // @synthesize continueActionHandler=_continueActionHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ learnMorePresentationHandler; // @synthesize learnMorePresentationHandler=_learnMorePresentationHandler;
@property(retain, nonatomic) NSURL *learnMoreURL; // @synthesize learnMoreURL=_learnMoreURL;
@property(retain, nonatomic) PKPaymentProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
@property(nonatomic) id <PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property(nonatomic) long long context; // @synthesize context=_context;
@property(nonatomic) long long reason; // @synthesize reason=_reason;
// - (void).cxx_destruct;
- (void)handleDone:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)_webViewDidLoad:(BOOL)arg1 withError:(id)arg2;
- (id)_alertWithReason:(long long)arg1 learnMoreURL:(id)arg2 isPreloaded:(BOOL)arg3;
- (void)preflightWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)webView;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithReason:(long long)arg1 context:(long long)arg2 setupDelegate:(id)arg3;

@end

