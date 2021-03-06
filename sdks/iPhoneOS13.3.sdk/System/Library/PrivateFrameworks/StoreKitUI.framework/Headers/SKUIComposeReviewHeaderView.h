//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <StoreKitUI/SKUIComposeTextFieldListViewDelegate-Protocol.h>

@class NSString, SKStarRatingControl, SKUIComposeTextFieldListView, SKUIReviewMetadata, UIResponder;
@protocol SKUIComposeReviewHeaderDelegate;

__attribute__((visibility("hidden")))
@interface SKUIComposeReviewHeaderView : UIView <SKUIComposeTextFieldListViewDelegate>
{
    id <SKUIComposeReviewHeaderDelegate> _delegate;
    SKStarRatingControl *_ratingControl;
    SKUIReviewMetadata *_review;
    long long _style;
    SKUIComposeTextFieldListView *_textFieldListView;
}

@property(retain, nonatomic) SKUIReviewMetadata *review; // @synthesize review=_review;
@property(nonatomic) __weak id <SKUIComposeReviewHeaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long composeReviewStyle; // @synthesize composeReviewStyle=_style;
// - (void).cxx_destruct;
- (void)textFieldListValuesDidChange:(id)arg1;
- (void)textFieldListValidityDidChange:(id)arg1;
- (id)textFieldList:(id)arg1 configurationForFieldAtIndex:(NSUInteger)arg2;
- (long long)numberOfFieldsInTextFieldList:(id)arg1;
- (long long)numberOfColumnsInTextFieldList:(id)arg1;
@property(readonly, nonatomic) NSString *title;
@property(nonatomic) float rating;
@property(readonly, nonatomic) UIResponder *initialFirstResponder;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1 style:(long long)arg2;

@end

