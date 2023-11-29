#include "card.hpp"

enum class CardSuit { SPADES, HEARTS, DIAMONDS, CLUBS };
enum class CardRank { ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING };

class Card{
	private:
		CardSuit suit;
		CardRank rank;

	public:
		bool hidden;
		
		Card(CardSuit suit, CardRank rank) : suit(suit), rank(rank) {}

		CardSuit GetSuit(){
			return suit;
		}
		CardRank GetRank(){
			return rank;
		}
		bool IsLesserRank(Card* card){
			return static_cast<int>(rank) < static_cast<int>(card->rank);
		}
		bool IsDiffColor(Card* card){
			if (suit == CardSuit::HEARTS || suit == CardSuit::DIAMONDS)
				return (card->suit == CardSuit::SPADES || card->suit == CardSuit::CLUBS);
			else
				return (card->suit == CardSuit::HEARTS || card->suit == CardSuit::DIAMONDS);
		}
};