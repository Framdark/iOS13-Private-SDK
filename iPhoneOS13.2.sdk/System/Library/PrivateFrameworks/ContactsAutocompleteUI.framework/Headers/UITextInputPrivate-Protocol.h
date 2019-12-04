//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsAutocompleteUI/UITextInput-Protocol.h>
#import <ContactsAutocompleteUI/UITextInputTokenizer-Protocol.h>
#import <ContactsAutocompleteUI/UITextInputTraits_Private-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, NSString, RTIInputSystemSourceSession, UIColor, UIDictationSerializableResults, UIFont, UITextInputTraits, UITextInteractionAssistant, UITextPosition, UITextRange, UITextSuggestion, UIView, WebEvent;
@protocol UISelectionInteractionAssistant, UITextInputSuggestionDelegate;

@protocol UITextInputPrivate <UITextInput, UITextInputTokenizer, UITextInputTraits_Private>
@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
- (_Bool)hasSelection;
- (void)selectAll;
- (_Bool)hasContent;
- (struct _NSRange)selectionRange;
- (UITextInputTraits *)textInputTraits;

@optional
@property(readonly, nonatomic) _Bool supportsImagePaste;
@property(readonly, nonatomic) RTIInputSystemSourceSession *_rtiSourceSession;
@property(nonatomic) long long _textInputSource;
@property(readonly, nonatomic) id <UITextInputSuggestionDelegate> textInputSuggestionDelegate;
@property(nonatomic) long long selectionGranularity;
- (void)removeAnnotation:(NSString *)arg1 forRange:(UITextRange *)arg2;
- (void)replaceRange:(UITextRange *)arg1 withAnnotatedString:(NSAttributedString *)arg2 relativeReplacementRange:(struct _NSRange)arg3;
- (NSAttributedString *)annotatedSubstringForRange:(UITextRange *)arg1;
- (SEL)_sendCurrentLocationAction;
- (_Bool)_shouldSuppressSelectionCommands;
- (void)_didHideCorrections;
- (void)_willShowCorrections;
- (void)_insertAttributedTextWithoutClosingTyping:(NSAttributedString *)arg1;
- (UIFont *)fontForCaretSelection;
- (UIColor *)textColorForCaretSelection;
- (void)replaceRangeWithTextWithoutClosingTyping:(UITextRange *)arg1 replacementText:(NSString *)arg2;
- (_Bool)_shouldRepeatInsertText:(NSString *)arg1;
- (double)_delayUntilRepeatInsertText:(NSString *)arg1;
- (NSDictionary *)_autofillContext;
- (_Bool)isAutoFillMode;
- (void)acceptedAutoFillWord:(NSString *)arg1;
- (void)insertTextSuggestion:(UITextSuggestion *)arg1;
- (UITextRange *)rangeWithTextAlternatives:(id *)arg1 atPosition:(UITextPosition *)arg2;
- (NSArray *)metadataDictionariesForDictationResults;
- (void)insertDictationResult:(UIDictationSerializableResults *)arg1 withCorrectionIdentifier:(id)arg2;
- (void)streamingDictationDidEnd;
- (void)streamingDictationDidBegin;
- (struct CGRect)visibleRect;
- (UIView *)selectionContainerView;
- (UIView *)automaticallySelectedOverlay;
- (void)setBottomBufferHeight:(double)arg1;
- (void)modifierFlagsDidChangeFrom:(long long)arg1 to:(long long)arg2;
- (id <UISelectionInteractionAssistant>)selectionInteractionAssistant;
- (void)handleKeyWebEvent:(WebEvent *)arg1 withCompletionHandler:(void (^)(WebEvent *, _Bool))arg2;
- (void)handleKeyWebEvent:(WebEvent *)arg1;
- (_Bool)requiresKeyEvents;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)insertText:(NSString *)arg1 style:(long long)arg2 alternatives:(NSArray *)arg3;
- (void)replaceRange:(UITextRange *)arg1 withAttributedText:(NSAttributedString *)arg2;
- (NSAttributedString *)attributedTextInRange:(UITextRange *)arg1;
- (void)insertAttributedText:(NSAttributedString *)arg1;
@end
