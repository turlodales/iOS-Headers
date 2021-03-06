/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSManagedObjectContext, NSMutableArray, NSSQLConnection, NSSQLCore, NSSQLEntity;

@interface NSSQLChannel : NSObject
{
    NSSQLConnection *_connection;
    NSSQLCore *_sqlCore;
    NSSQLEntity *_currentEntity;
    NSMutableArray *_fetchProperties;
    NSManagedObjectContext *_currentMOCon;
}

- (void)_setCurrentEntityAndRelationshipWithFetchRequest:(id)arg1;
- (id)currentContext;
- (void)_closeChannel;
- (void)_openChannel;
- (void)endFetchAndRecycleStatement:(BOOL)arg1;
- (void)endFetch;
- (BOOL)selectCountWithFetchRequest:(id)arg1;
- (void)selectRowsWithCachedStatement:(id)arg1;
- (void)selectRowsWithStatement:(id)arg1;
- (void)selectRowsWithFetchRequest:(id)arg1;
- (id)sqlCore;
- (BOOL)isFetchInProgress;
- (void)setCurrentContext:(id)arg1;
- (void)setCurrentEntity:(id)arg1;
- (id)_propertiesToFetch;
- (id)connection;
- (void)dealloc;
- (void)finalize;
- (id)initWithSQLCore:(id)arg1;

@end

