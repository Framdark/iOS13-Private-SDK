//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class AFUserUtteranceSelectionResults, NSString;
@protocol SiriUIViewController;

@protocol SiriUIAceObjectViewControllerDelegatePrivate 
- (void)siriViewControllerRequestTearDownEditingViewController:(id <SiriUIViewController>)arg1;
- (void)siriViewControllerRequestToPin:(id <SiriUIViewController>)arg1;
- (void)siriViewController:(id <SiriUIViewController>)arg1 startCorrectedSpeechRequestWithText:(NSString *)arg2 correctionIdentifier:(id)arg3 userSelectionResults:(AFUserUtteranceSelectionResults *)arg4;
- (void)siriViewControllerDidEndEditing:(id <SiriUIViewController>)arg1;
- (void)siriViewControllerWillBeginEditing:(id <SiriUIViewController>)arg1;
- (void)siriViewControllerRequestKeyboardForTapToEditWithCompletion:(void (^)(_Bool))arg1;
- (_Bool)siriViewControllerShouldPreventUserInteraction:(id <SiriUIViewController>)arg1;
@end
