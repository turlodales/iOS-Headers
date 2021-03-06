/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface NSThread : NSObject
{
    id _private;
    unsigned char _bytes[44];
}

+ (void)detachNewThreadSelector:(SEL)arg1 toTarget:(id)arg2 withObject:(id)arg3;
+ (BOOL)isDying;
+ (void)exit;
+ (id)currentThread;
+ (id)mainThread;
+ (id)callStackSymbols;
+ (id)callStackReturnAddresses;
+ (void)sleepForTimeInterval:(double)arg1;
+ (void)sleepUntilDate:(id)arg1;
+ (BOOL)setThreadPriority:(double)arg1;
+ (double)threadPriority;
+ (BOOL)isMultiThreaded;
+ (BOOL)isMainThread;
- (void)_nq:(id)arg1;
- (void)main;
- (void)start;
- (id)description;
- (void)cancel;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isMainThread;
- (void)setThreadPriority:(double)arg1;
- (double)threadPriority;
- (unsigned int)stackSize;
- (void)setStackSize:(unsigned int)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)threadDictionary;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (id)init;
- (BOOL)isDying;
- (id)runLoop;

@end

