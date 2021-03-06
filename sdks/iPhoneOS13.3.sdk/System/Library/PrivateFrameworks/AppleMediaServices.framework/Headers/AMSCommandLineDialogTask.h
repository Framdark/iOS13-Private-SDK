//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class AMSDialogRequest;

@interface AMSCommandLineDialogTask : AMSTask
{
    AMSDialogRequest *_request;
    double _maximumDialogWidth;
    double _minimumDialogWidth;
    double _dialogPadding;
}

@property(nonatomic) double dialogPadding; // @synthesize dialogPadding=_dialogPadding;
@property(nonatomic) double minimumDialogWidth; // @synthesize minimumDialogWidth=_minimumDialogWidth;
@property(nonatomic) double maximumDialogWidth; // @synthesize maximumDialogWidth=_maximumDialogWidth;
@property(readonly, nonatomic) AMSDialogRequest *request; // @synthesize request=_request;
// - (void).cxx_destruct;
- (void)_printMessage:(id)arg1;
- (id)_getUserInput;
- (id)_gatherTextfieldInput;
- (long long)_gatherButtonInput;
- (id)_createTextfieldWithTextfield:(id)arg1 width:(long long)arg2;
- (id)_createText:(id)arg1 width:(long long)arg2 centered:(BOOL)arg3 omitLeftPipe:(BOOL)arg4;
- (id)_createLinesFromText:(id)arg1 width:(long long)arg2;
- (id)_createHorizontolLineWithWidth:(long long)arg1;
- (id)present;
- (id)initWithRequest:(id)arg1;

@end

