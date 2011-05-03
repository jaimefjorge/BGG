//
//  DBBoardGameDetail.h
//  bgg
//
//  Created by João Caxaria on 5/3/11.
//  Copyright (c) 2011 Imaginary Factory. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class DBBoardGame;

@interface DBBoardGameDetail : NSManagedObject {
@private
}
@property (nonatomic, retain) NSString * gameId;
@property (nonatomic, retain) NSString * gameDescription;
@property (nonatomic, retain) NSNumber * yearPublished;
@property (nonatomic, retain) NSNumber * minPlayers;
@property (nonatomic, retain) NSNumber * maxPlayers;
@property (nonatomic, retain) NSNumber * playingTime;
@property (nonatomic, retain) NSNumber * minAge;
@property (nonatomic, retain) DBBoardGame * boardGame;

@end
