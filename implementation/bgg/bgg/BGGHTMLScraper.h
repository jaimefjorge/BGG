//
//  BGGHTMLScraper.h
//  bgg
//
//  Created by João Caxaria on 5/3/11.
//  Copyright 2011 Imaginary Factory. All rights reserved.
//


#import <Foundation/Foundation.h>


@interface BGGHTMLScraper : NSObject
{
}

-(NSArray *) scrapeGamesFromTop100:(NSData *)document;

@end
