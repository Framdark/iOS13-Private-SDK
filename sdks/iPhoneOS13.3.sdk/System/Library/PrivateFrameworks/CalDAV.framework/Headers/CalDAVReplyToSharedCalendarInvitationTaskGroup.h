//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import <CalDAV/CoreDAVPostTaskDelegate-Protocol.h>

@class CalDAVCalendarServerInviteNotificationItem, NSURL;

@interface CalDAVReplyToSharedCalendarInvitationTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate>
{
    BOOL _acceptInvitation;
    NSURL *_sharedAs;
    CalDAVCalendarServerInviteNotificationItem *_invitation;
    NSURL *_calendarHomeURL;
}

@property(retain, nonatomic) NSURL *calendarHomeURL; // @synthesize calendarHomeURL=_calendarHomeURL;
@property(nonatomic) BOOL acceptInvitation; // @synthesize acceptInvitation=_acceptInvitation;
@property(retain, nonatomic) CalDAVCalendarServerInviteNotificationItem *invitation; // @synthesize invitation=_invitation;
@property(retain, nonatomic) NSURL *sharedAs; // @synthesize sharedAs=_sharedAs;
// - (void).cxx_destruct;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (id)generateReply;
- (void)startTaskGroup;
- (id)initWithInvitation:(id)arg1 acceptInvitation:(BOOL)arg2 atCalendarHomeURL:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;

@end
