//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUndoManager, PDFAnnotation, PDFPageView, PDFView, UITextView, UIViewController;

__attribute__((visibility("hidden")))
@interface PDFKitPopupViewPrivate : NSObject
{
    PDFAnnotation *parentAnnotation;
    PDFPageView *pageView;
    PDFView *view;
    UITextView *popupTextView;
    NSUndoManager *popupTextViewUndoManager;
    UIViewController *popupController;
    NSString *contents;
    BOOL deviceIsiPhone;
    BOOL deviceIsiPad;
}

// - (void).cxx_destruct;

@end

