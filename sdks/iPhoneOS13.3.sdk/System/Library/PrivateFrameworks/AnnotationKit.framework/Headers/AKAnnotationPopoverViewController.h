//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AnnotationKit/AKPopoverAnnotationEditor-Protocol.h>

@class AKAnnotation, AKAnnotationTheme, AKPageController, AKTouchOutsideViewGestureRecognizer, UIView;
@protocol AKAnnotationEditorDelegate;

@interface AKAnnotationPopoverViewController : UIViewController <UIGestureRecognizerDelegate, AKPopoverAnnotationEditor>
{
    AKTouchOutsideViewGestureRecognizer *mHideOnTouchGestureRecognizer;
    AKAnnotation *mAnnotation;
    AKPageController *mAnnotationPageController;
    AKAnnotationTheme *mAnnotationTheme;
    int mPosition;
    id mObserver;
    BOOL _editsOnLaunch;
    UIView *_presentationView;
    id <AKAnnotationEditorDelegate> _delegate;
    CGRect _presentationRect;
}

@property(nonatomic) __weak id <AKAnnotationEditorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL editsOnLaunch; // @synthesize editsOnLaunch=_editsOnLaunch;
@property(retain, nonatomic) UIView *presentationView; // @synthesize presentationView=_presentationView;
@property(nonatomic) CGRect presentationRect; // @synthesize presentationRect=_presentationRect;
@property(nonatomic) int position; // @synthesize position=mPosition;
@property(retain, nonatomic) AKAnnotationTheme *annotationTheme; // @synthesize annotationTheme=mAnnotationTheme;
@property(retain, nonatomic) AKPageController *annotationPageController; // @synthesize annotationPageController=mAnnotationPageController;
@property(retain, nonatomic) AKAnnotation *annotation; // @synthesize annotation=mAnnotation;
// - (void).cxx_destruct;
- (void)hide;
- (void)didHide;
- (void)willHide;
- (void)didShow;
- (void)willShow;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)hideAnimation:(id)arg1 finished:(id)arg2 context:(void )arg3;
- (void)presentFromRect:(CGRect)arg1 view:(id)arg2;
- (int)willPresentInPosition:(CGRect)arg1 view:(id)arg2;
- (CGRect)p_containerFrameForView:(id)arg1;
- (BOOL)canPresentInPosition:(int)arg1;
- (void)popInAnimation:(id)arg1 finished:(id)arg2 context:(void )arg3;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (void)releaseOutlets;
- (id)init;

@end

