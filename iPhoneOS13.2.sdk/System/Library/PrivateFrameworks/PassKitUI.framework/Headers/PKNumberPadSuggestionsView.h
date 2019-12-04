//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIStackView.h>

@class NSArray, UIColor;
@protocol PKNumberPadSuggestionsViewDelegate;

@interface PKNumberPadSuggestionsView : UIStackView
{
    NSArray *_suggestionButtons;
    id <PKNumberPadSuggestionsViewDelegate> _delegate;
    NSArray *_suggestions;
    UIColor *_buttonTextColor;
    UIColor *_buttonBackgroundColor;
}

+ (struct CGSize)defaultSize;
@property(copy, nonatomic) UIColor *buttonBackgroundColor; // @synthesize buttonBackgroundColor=_buttonBackgroundColor;
@property(copy, nonatomic) UIColor *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(copy, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(nonatomic) __weak id <PKNumberPadSuggestionsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_selectedSuggestion:(id)arg1;
- (id)initWithDefaultFrame;
- (id)initWithFrame:(struct CGRect)arg1;

@end
